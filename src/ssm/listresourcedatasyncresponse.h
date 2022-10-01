// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCEDATASYNCRESPONSE_H
#define QTAWS_LISTRESOURCEDATASYNCRESPONSE_H

#include "ssmresponse.h"
#include "listresourcedatasyncrequest.h"

namespace QtAws {
namespace Ssm {

class ListResourceDataSyncResponsePrivate;

class QTAWSSSM_EXPORT ListResourceDataSyncResponse : public SsmResponse {
    Q_OBJECT

public:
    ListResourceDataSyncResponse(const ListResourceDataSyncRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListResourceDataSyncRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResourceDataSyncResponse)
    Q_DISABLE_COPY(ListResourceDataSyncResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
