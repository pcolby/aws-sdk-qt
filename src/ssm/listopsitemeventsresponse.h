// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOPSITEMEVENTSRESPONSE_H
#define QTAWS_LISTOPSITEMEVENTSRESPONSE_H

#include "ssmresponse.h"
#include "listopsitemeventsrequest.h"

namespace QtAws {
namespace Ssm {

class ListOpsItemEventsResponsePrivate;

class QTAWSSSM_EXPORT ListOpsItemEventsResponse : public SsmResponse {
    Q_OBJECT

public:
    ListOpsItemEventsResponse(const ListOpsItemEventsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListOpsItemEventsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListOpsItemEventsResponse)
    Q_DISABLE_COPY(ListOpsItemEventsResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
