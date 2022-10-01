// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLOGGERDEFINITIONSRESPONSE_H
#define QTAWS_LISTLOGGERDEFINITIONSRESPONSE_H

#include "greengrassresponse.h"
#include "listloggerdefinitionsrequest.h"

namespace QtAws {
namespace Greengrass {

class ListLoggerDefinitionsResponsePrivate;

class QTAWSGREENGRASS_EXPORT ListLoggerDefinitionsResponse : public GreengrassResponse {
    Q_OBJECT

public:
    ListLoggerDefinitionsResponse(const ListLoggerDefinitionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListLoggerDefinitionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLoggerDefinitionsResponse)
    Q_DISABLE_COPY(ListLoggerDefinitionsResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
