// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMILESTONESRESPONSE_H
#define QTAWS_LISTMILESTONESRESPONSE_H

#include "wellarchitectedresponse.h"
#include "listmilestonesrequest.h"

namespace QtAws {
namespace WellArchitected {

class ListMilestonesResponsePrivate;

class QTAWSWELLARCHITECTED_EXPORT ListMilestonesResponse : public WellArchitectedResponse {
    Q_OBJECT

public:
    ListMilestonesResponse(const ListMilestonesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListMilestonesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMilestonesResponse)
    Q_DISABLE_COPY(ListMilestonesResponse)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
