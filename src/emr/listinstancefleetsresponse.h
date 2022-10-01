// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINSTANCEFLEETSRESPONSE_H
#define QTAWS_LISTINSTANCEFLEETSRESPONSE_H

#include "emrresponse.h"
#include "listinstancefleetsrequest.h"

namespace QtAws {
namespace Emr {

class ListInstanceFleetsResponsePrivate;

class QTAWSEMR_EXPORT ListInstanceFleetsResponse : public EmrResponse {
    Q_OBJECT

public:
    ListInstanceFleetsResponse(const ListInstanceFleetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListInstanceFleetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListInstanceFleetsResponse)
    Q_DISABLE_COPY(ListInstanceFleetsResponse)

};

} // namespace Emr
} // namespace QtAws

#endif
