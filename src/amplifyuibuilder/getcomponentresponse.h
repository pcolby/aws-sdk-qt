// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMPONENTRESPONSE_H
#define QTAWS_GETCOMPONENTRESPONSE_H

#include "amplifyuibuilderresponse.h"
#include "getcomponentrequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class GetComponentResponsePrivate;

class QTAWSAMPLIFYUIBUILDER_EXPORT GetComponentResponse : public AmplifyUIBuilderResponse {
    Q_OBJECT

public:
    GetComponentResponse(const GetComponentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetComponentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetComponentResponse)
    Q_DISABLE_COPY(GetComponentResponse)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
