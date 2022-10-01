// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFORMRESPONSE_H
#define QTAWS_GETFORMRESPONSE_H

#include "amplifyuibuilderresponse.h"
#include "getformrequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class GetFormResponsePrivate;

class QTAWSAMPLIFYUIBUILDER_EXPORT GetFormResponse : public AmplifyUIBuilderResponse {
    Q_OBJECT

public:
    GetFormResponse(const GetFormRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetFormRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFormResponse)
    Q_DISABLE_COPY(GetFormResponse)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
