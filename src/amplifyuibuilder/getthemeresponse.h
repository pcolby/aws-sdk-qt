// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTHEMERESPONSE_H
#define QTAWS_GETTHEMERESPONSE_H

#include "amplifyuibuilderresponse.h"
#include "getthemerequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class GetThemeResponsePrivate;

class QTAWSAMPLIFYUIBUILDER_EXPORT GetThemeResponse : public AmplifyUIBuilderResponse {
    Q_OBJECT

public:
    GetThemeResponse(const GetThemeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetThemeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetThemeResponse)
    Q_DISABLE_COPY(GetThemeResponse)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
