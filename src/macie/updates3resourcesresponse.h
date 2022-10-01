// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATES3RESOURCESRESPONSE_H
#define QTAWS_UPDATES3RESOURCESRESPONSE_H

#include "macieresponse.h"
#include "updates3resourcesrequest.h"

namespace QtAws {
namespace Macie {

class UpdateS3ResourcesResponsePrivate;

class QTAWSMACIE_EXPORT UpdateS3ResourcesResponse : public MacieResponse {
    Q_OBJECT

public:
    UpdateS3ResourcesResponse(const UpdateS3ResourcesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateS3ResourcesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateS3ResourcesResponse)
    Q_DISABLE_COPY(UpdateS3ResourcesResponse)

};

} // namespace Macie
} // namespace QtAws

#endif
