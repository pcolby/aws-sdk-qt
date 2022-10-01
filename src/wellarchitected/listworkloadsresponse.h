// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORKLOADSRESPONSE_H
#define QTAWS_LISTWORKLOADSRESPONSE_H

#include "wellarchitectedresponse.h"
#include "listworkloadsrequest.h"

namespace QtAws {
namespace WellArchitected {

class ListWorkloadsResponsePrivate;

class QTAWSWELLARCHITECTED_EXPORT ListWorkloadsResponse : public WellArchitectedResponse {
    Q_OBJECT

public:
    ListWorkloadsResponse(const ListWorkloadsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListWorkloadsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListWorkloadsResponse)
    Q_DISABLE_COPY(ListWorkloadsResponse)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
