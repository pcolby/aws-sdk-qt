// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFUNCTIONDEFINITIONSRESPONSE_H
#define QTAWS_LISTFUNCTIONDEFINITIONSRESPONSE_H

#include "greengrassresponse.h"
#include "listfunctiondefinitionsrequest.h"

namespace QtAws {
namespace Greengrass {

class ListFunctionDefinitionsResponsePrivate;

class QTAWSGREENGRASS_EXPORT ListFunctionDefinitionsResponse : public GreengrassResponse {
    Q_OBJECT

public:
    ListFunctionDefinitionsResponse(const ListFunctionDefinitionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListFunctionDefinitionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFunctionDefinitionsResponse)
    Q_DISABLE_COPY(ListFunctionDefinitionsResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
