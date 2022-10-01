// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTABLECOLUMNSRESPONSE_H
#define QTAWS_LISTTABLECOLUMNSRESPONSE_H

#include "honeycoderesponse.h"
#include "listtablecolumnsrequest.h"

namespace QtAws {
namespace Honeycode {

class ListTableColumnsResponsePrivate;

class QTAWSHONEYCODE_EXPORT ListTableColumnsResponse : public HoneycodeResponse {
    Q_OBJECT

public:
    ListTableColumnsResponse(const ListTableColumnsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTableColumnsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTableColumnsResponse)
    Q_DISABLE_COPY(ListTableColumnsResponse)

};

} // namespace Honeycode
} // namespace QtAws

#endif
