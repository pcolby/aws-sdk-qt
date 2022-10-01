// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXPERIMENTSRESPONSE_H
#define QTAWS_LISTEXPERIMENTSRESPONSE_H

#include "fisresponse.h"
#include "listexperimentsrequest.h"

namespace QtAws {
namespace Fis {

class ListExperimentsResponsePrivate;

class QTAWSFIS_EXPORT ListExperimentsResponse : public FisResponse {
    Q_OBJECT

public:
    ListExperimentsResponse(const ListExperimentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListExperimentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListExperimentsResponse)
    Q_DISABLE_COPY(ListExperimentsResponse)

};

} // namespace Fis
} // namespace QtAws

#endif
