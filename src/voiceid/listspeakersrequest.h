// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSPEAKERSREQUEST_H
#define QTAWS_LISTSPEAKERSREQUEST_H

#include "voiceidrequest.h"

namespace QtAws {
namespace VoiceId {

class ListSpeakersRequestPrivate;

class QTAWSVOICEID_EXPORT ListSpeakersRequest : public VoiceIdRequest {

public:
    ListSpeakersRequest(const ListSpeakersRequest &other);
    ListSpeakersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSpeakersRequest)

};

} // namespace VoiceId
} // namespace QtAws

#endif
