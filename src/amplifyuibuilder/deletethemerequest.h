// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETHEMEREQUEST_H
#define QTAWS_DELETETHEMEREQUEST_H

#include "amplifyuibuilderrequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class DeleteThemeRequestPrivate;

class QTAWSAMPLIFYUIBUILDER_EXPORT DeleteThemeRequest : public AmplifyUIBuilderRequest {

public:
    DeleteThemeRequest(const DeleteThemeRequest &other);
    DeleteThemeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteThemeRequest)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
