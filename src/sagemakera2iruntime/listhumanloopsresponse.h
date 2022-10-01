// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHUMANLOOPSRESPONSE_H
#define QTAWS_LISTHUMANLOOPSRESPONSE_H

#include "sagemakera2iruntimeresponse.h"
#include "listhumanloopsrequest.h"

namespace QtAws {
namespace SageMakerA2IRuntime {

class ListHumanLoopsResponsePrivate;

class QTAWSSAGEMAKERA2IRUNTIME_EXPORT ListHumanLoopsResponse : public SageMakerA2IRuntimeResponse {
    Q_OBJECT

public:
    ListHumanLoopsResponse(const ListHumanLoopsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListHumanLoopsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListHumanLoopsResponse)
    Q_DISABLE_COPY(ListHumanLoopsResponse)

};

} // namespace SageMakerA2IRuntime
} // namespace QtAws

#endif
