// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFORMREQUEST_H
#define QTAWS_CREATEFORMREQUEST_H

#include "amplifyuibuilderrequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class CreateFormRequestPrivate;

class QTAWSAMPLIFYUIBUILDER_EXPORT CreateFormRequest : public AmplifyUIBuilderRequest {

public:
    CreateFormRequest(const CreateFormRequest &other);
    CreateFormRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFormRequest)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
