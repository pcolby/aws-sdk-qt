// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECOMPONENTREQUEST_H
#define QTAWS_CREATECOMPONENTREQUEST_H

#include "amplifyuibuilderrequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class CreateComponentRequestPrivate;

class QTAWSAMPLIFYUIBUILDER_EXPORT CreateComponentRequest : public AmplifyUIBuilderRequest {

public:
    CreateComponentRequest(const CreateComponentRequest &other);
    CreateComponentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateComponentRequest)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
