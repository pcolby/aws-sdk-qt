// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTHEMEREQUEST_H
#define QTAWS_GETTHEMEREQUEST_H

#include "amplifyuibuilderrequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class GetThemeRequestPrivate;

class QTAWSAMPLIFYUIBUILDER_EXPORT GetThemeRequest : public AmplifyUIBuilderRequest {

public:
    GetThemeRequest(const GetThemeRequest &other);
    GetThemeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetThemeRequest)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
