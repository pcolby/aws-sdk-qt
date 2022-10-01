// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBACKENDAPIMODELSREQUEST_H
#define QTAWS_GETBACKENDAPIMODELSREQUEST_H

#include "amplifybackendrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class GetBackendAPIModelsRequestPrivate;

class QTAWSAMPLIFYBACKEND_EXPORT GetBackendAPIModelsRequest : public AmplifyBackendRequest {

public:
    GetBackendAPIModelsRequest(const GetBackendAPIModelsRequest &other);
    GetBackendAPIModelsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBackendAPIModelsRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
