// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTUDIOCOMPONENTRESPONSE_H
#define QTAWS_DELETESTUDIOCOMPONENTRESPONSE_H

#include "nimbleresponse.h"
#include "deletestudiocomponentrequest.h"

namespace QtAws {
namespace Nimble {

class DeleteStudioComponentResponsePrivate;

class QTAWSNIMBLE_EXPORT DeleteStudioComponentResponse : public NimbleResponse {
    Q_OBJECT

public:
    DeleteStudioComponentResponse(const DeleteStudioComponentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteStudioComponentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteStudioComponentResponse)
    Q_DISABLE_COPY(DeleteStudioComponentResponse)

};

} // namespace Nimble
} // namespace QtAws

#endif
