// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDISCOVERERRESPONSE_H
#define QTAWS_STARTDISCOVERERRESPONSE_H

#include "schemasresponse.h"
#include "startdiscovererrequest.h"

namespace QtAws {
namespace Schemas {

class StartDiscovererResponsePrivate;

class QTAWSSCHEMAS_EXPORT StartDiscovererResponse : public SchemasResponse {
    Q_OBJECT

public:
    StartDiscovererResponse(const StartDiscovererRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartDiscovererRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartDiscovererResponse)
    Q_DISABLE_COPY(StartDiscovererResponse)

};

} // namespace Schemas
} // namespace QtAws

#endif
