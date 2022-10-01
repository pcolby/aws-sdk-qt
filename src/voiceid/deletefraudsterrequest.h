// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFRAUDSTERREQUEST_H
#define QTAWS_DELETEFRAUDSTERREQUEST_H

#include "voiceidrequest.h"

namespace QtAws {
namespace VoiceId {

class DeleteFraudsterRequestPrivate;

class QTAWSVOICEID_EXPORT DeleteFraudsterRequest : public VoiceIdRequest {

public:
    DeleteFraudsterRequest(const DeleteFraudsterRequest &other);
    DeleteFraudsterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFraudsterRequest)

};

} // namespace VoiceId
} // namespace QtAws

#endif
