// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVCENTERCLIENTRESPONSE_H
#define QTAWS_DELETEVCENTERCLIENTRESPONSE_H

#include "mgnresponse.h"
#include "deletevcenterclientrequest.h"

namespace QtAws {
namespace Mgn {

class DeleteVcenterClientResponsePrivate;

class QTAWSMGN_EXPORT DeleteVcenterClientResponse : public MgnResponse {
    Q_OBJECT

public:
    DeleteVcenterClientResponse(const DeleteVcenterClientRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteVcenterClientRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVcenterClientResponse)
    Q_DISABLE_COPY(DeleteVcenterClientResponse)

};

} // namespace Mgn
} // namespace QtAws

#endif
