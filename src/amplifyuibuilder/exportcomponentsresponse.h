// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTCOMPONENTSRESPONSE_H
#define QTAWS_EXPORTCOMPONENTSRESPONSE_H

#include "amplifyuibuilderresponse.h"
#include "exportcomponentsrequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class ExportComponentsResponsePrivate;

class QTAWSAMPLIFYUIBUILDER_EXPORT ExportComponentsResponse : public AmplifyUIBuilderResponse {
    Q_OBJECT

public:
    ExportComponentsResponse(const ExportComponentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ExportComponentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExportComponentsResponse)
    Q_DISABLE_COPY(ExportComponentsResponse)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
