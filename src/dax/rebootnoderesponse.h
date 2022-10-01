// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBOOTNODERESPONSE_H
#define QTAWS_REBOOTNODERESPONSE_H

#include "daxresponse.h"
#include "rebootnoderequest.h"

namespace QtAws {
namespace Dax {

class RebootNodeResponsePrivate;

class QTAWSDAX_EXPORT RebootNodeResponse : public DaxResponse {
    Q_OBJECT

public:
    RebootNodeResponse(const RebootNodeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RebootNodeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RebootNodeResponse)
    Q_DISABLE_COPY(RebootNodeResponse)

};

} // namespace Dax
} // namespace QtAws

#endif
