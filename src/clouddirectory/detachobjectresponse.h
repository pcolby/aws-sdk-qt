// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHOBJECTRESPONSE_H
#define QTAWS_DETACHOBJECTRESPONSE_H

#include "clouddirectoryresponse.h"
#include "detachobjectrequest.h"

namespace QtAws {
namespace CloudDirectory {

class DetachObjectResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT DetachObjectResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    DetachObjectResponse(const DetachObjectRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DetachObjectRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetachObjectResponse)
    Q_DISABLE_COPY(DetachObjectResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
