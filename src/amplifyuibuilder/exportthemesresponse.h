// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTTHEMESRESPONSE_H
#define QTAWS_EXPORTTHEMESRESPONSE_H

#include "amplifyuibuilderresponse.h"
#include "exportthemesrequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class ExportThemesResponsePrivate;

class QTAWSAMPLIFYUIBUILDER_EXPORT ExportThemesResponse : public AmplifyUIBuilderResponse {
    Q_OBJECT

public:
    ExportThemesResponse(const ExportThemesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ExportThemesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExportThemesResponse)
    Q_DISABLE_COPY(ExportThemesResponse)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
