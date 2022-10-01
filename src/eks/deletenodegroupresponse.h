// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENODEGROUPRESPONSE_H
#define QTAWS_DELETENODEGROUPRESPONSE_H

#include "eksresponse.h"
#include "deletenodegrouprequest.h"

namespace QtAws {
namespace Eks {

class DeleteNodegroupResponsePrivate;

class QTAWSEKS_EXPORT DeleteNodegroupResponse : public EksResponse {
    Q_OBJECT

public:
    DeleteNodegroupResponse(const DeleteNodegroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteNodegroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteNodegroupResponse)
    Q_DISABLE_COPY(DeleteNodegroupResponse)

};

} // namespace Eks
} // namespace QtAws

#endif
