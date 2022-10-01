// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMMANDSRESPONSE_H
#define QTAWS_LISTCOMMANDSRESPONSE_H

#include "ssmresponse.h"
#include "listcommandsrequest.h"

namespace QtAws {
namespace Ssm {

class ListCommandsResponsePrivate;

class QTAWSSSM_EXPORT ListCommandsResponse : public SsmResponse {
    Q_OBJECT

public:
    ListCommandsResponse(const ListCommandsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListCommandsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCommandsResponse)
    Q_DISABLE_COPY(ListCommandsResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
