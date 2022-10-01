// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMMANDINVOCATIONSRESPONSE_H
#define QTAWS_LISTCOMMANDINVOCATIONSRESPONSE_H

#include "ssmresponse.h"
#include "listcommandinvocationsrequest.h"

namespace QtAws {
namespace Ssm {

class ListCommandInvocationsResponsePrivate;

class QTAWSSSM_EXPORT ListCommandInvocationsResponse : public SsmResponse {
    Q_OBJECT

public:
    ListCommandInvocationsResponse(const ListCommandInvocationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListCommandInvocationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCommandInvocationsResponse)
    Q_DISABLE_COPY(ListCommandInvocationsResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
