// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPDISCOVERERRESPONSE_H
#define QTAWS_STOPDISCOVERERRESPONSE_H

#include "schemasresponse.h"
#include "stopdiscovererrequest.h"

namespace QtAws {
namespace Schemas {

class StopDiscovererResponsePrivate;

class QTAWSSCHEMAS_EXPORT StopDiscovererResponse : public SchemasResponse {
    Q_OBJECT

public:
    StopDiscovererResponse(const StopDiscovererRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopDiscovererRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopDiscovererResponse)
    Q_DISABLE_COPY(StopDiscovererResponse)

};

} // namespace Schemas
} // namespace QtAws

#endif
