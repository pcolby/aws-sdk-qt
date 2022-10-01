// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTATEMACHINESRESPONSE_H
#define QTAWS_LISTSTATEMACHINESRESPONSE_H

#include "sfnresponse.h"
#include "liststatemachinesrequest.h"

namespace QtAws {
namespace Sfn {

class ListStateMachinesResponsePrivate;

class QTAWSSFN_EXPORT ListStateMachinesResponse : public SfnResponse {
    Q_OBJECT

public:
    ListStateMachinesResponse(const ListStateMachinesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListStateMachinesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStateMachinesResponse)
    Q_DISABLE_COPY(ListStateMachinesResponse)

};

} // namespace Sfn
} // namespace QtAws

#endif
