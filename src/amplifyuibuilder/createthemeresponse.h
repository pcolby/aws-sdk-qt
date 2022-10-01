// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETHEMERESPONSE_H
#define QTAWS_CREATETHEMERESPONSE_H

#include "amplifyuibuilderresponse.h"
#include "createthemerequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class CreateThemeResponsePrivate;

class QTAWSAMPLIFYUIBUILDER_EXPORT CreateThemeResponse : public AmplifyUIBuilderResponse {
    Q_OBJECT

public:
    CreateThemeResponse(const CreateThemeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateThemeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateThemeResponse)
    Q_DISABLE_COPY(CreateThemeResponse)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
