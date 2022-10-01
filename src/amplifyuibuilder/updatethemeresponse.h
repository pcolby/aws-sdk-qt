// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETHEMERESPONSE_H
#define QTAWS_UPDATETHEMERESPONSE_H

#include "amplifyuibuilderresponse.h"
#include "updatethemerequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class UpdateThemeResponsePrivate;

class QTAWSAMPLIFYUIBUILDER_EXPORT UpdateThemeResponse : public AmplifyUIBuilderResponse {
    Q_OBJECT

public:
    UpdateThemeResponse(const UpdateThemeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateThemeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateThemeResponse)
    Q_DISABLE_COPY(UpdateThemeResponse)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
