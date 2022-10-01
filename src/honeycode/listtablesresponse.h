// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTABLESRESPONSE_H
#define QTAWS_LISTTABLESRESPONSE_H

#include "honeycoderesponse.h"
#include "listtablesrequest.h"

namespace QtAws {
namespace Honeycode {

class ListTablesResponsePrivate;

class QTAWSHONEYCODE_EXPORT ListTablesResponse : public HoneycodeResponse {
    Q_OBJECT

public:
    ListTablesResponse(const ListTablesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTablesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTablesResponse)
    Q_DISABLE_COPY(ListTablesResponse)

};

} // namespace Honeycode
} // namespace QtAws

#endif
