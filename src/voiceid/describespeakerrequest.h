// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESPEAKERREQUEST_H
#define QTAWS_DESCRIBESPEAKERREQUEST_H

#include "voiceidrequest.h"

namespace QtAws {
namespace VoiceId {

class DescribeSpeakerRequestPrivate;

class QTAWSVOICEID_EXPORT DescribeSpeakerRequest : public VoiceIdRequest {

public:
    DescribeSpeakerRequest(const DescribeSpeakerRequest &other);
    DescribeSpeakerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSpeakerRequest)

};

} // namespace VoiceId
} // namespace QtAws

#endif
