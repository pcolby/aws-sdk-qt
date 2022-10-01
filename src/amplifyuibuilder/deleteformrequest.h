// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFORMREQUEST_H
#define QTAWS_DELETEFORMREQUEST_H

#include "amplifyuibuilderrequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class DeleteFormRequestPrivate;

class QTAWSAMPLIFYUIBUILDER_EXPORT DeleteFormRequest : public AmplifyUIBuilderRequest {

public:
    DeleteFormRequest(const DeleteFormRequest &other);
    DeleteFormRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFormRequest)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
