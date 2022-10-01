// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDOMAINREQUEST_H
#define QTAWS_DELETEDOMAINREQUEST_H

#include "voiceidrequest.h"

namespace QtAws {
namespace VoiceId {

class DeleteDomainRequestPrivate;

class QTAWSVOICEID_EXPORT DeleteDomainRequest : public VoiceIdRequest {

public:
    DeleteDomainRequest(const DeleteDomainRequest &other);
    DeleteDomainRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDomainRequest)

};

} // namespace VoiceId
} // namespace QtAws

#endif
