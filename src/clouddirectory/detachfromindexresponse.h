// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHFROMINDEXRESPONSE_H
#define QTAWS_DETACHFROMINDEXRESPONSE_H

#include "clouddirectoryresponse.h"
#include "detachfromindexrequest.h"

namespace QtAws {
namespace CloudDirectory {

class DetachFromIndexResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT DetachFromIndexResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    DetachFromIndexResponse(const DetachFromIndexRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DetachFromIndexRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetachFromIndexResponse)
    Q_DISABLE_COPY(DetachFromIndexResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
