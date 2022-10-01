// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATEBACKENDAPIMODELSREQUEST_H
#define QTAWS_GENERATEBACKENDAPIMODELSREQUEST_H

#include "amplifybackendrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class GenerateBackendAPIModelsRequestPrivate;

class QTAWSAMPLIFYBACKEND_EXPORT GenerateBackendAPIModelsRequest : public AmplifyBackendRequest {

public:
    GenerateBackendAPIModelsRequest(const GenerateBackendAPIModelsRequest &other);
    GenerateBackendAPIModelsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GenerateBackendAPIModelsRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
