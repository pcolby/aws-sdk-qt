// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTFORMSRESPONSE_H
#define QTAWS_EXPORTFORMSRESPONSE_H

#include "amplifyuibuilderresponse.h"
#include "exportformsrequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class ExportFormsResponsePrivate;

class QTAWSAMPLIFYUIBUILDER_EXPORT ExportFormsResponse : public AmplifyUIBuilderResponse {
    Q_OBJECT

public:
    ExportFormsResponse(const ExportFormsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ExportFormsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExportFormsResponse)
    Q_DISABLE_COPY(ExportFormsResponse)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
