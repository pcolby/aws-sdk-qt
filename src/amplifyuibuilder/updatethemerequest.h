// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETHEMEREQUEST_H
#define QTAWS_UPDATETHEMEREQUEST_H

#include "amplifyuibuilderrequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class UpdateThemeRequestPrivate;

class QTAWSAMPLIFYUIBUILDER_EXPORT UpdateThemeRequest : public AmplifyUIBuilderRequest {

public:
    UpdateThemeRequest(const UpdateThemeRequest &other);
    UpdateThemeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateThemeRequest)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
