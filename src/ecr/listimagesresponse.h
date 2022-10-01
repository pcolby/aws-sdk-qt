// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIMAGESRESPONSE_H
#define QTAWS_LISTIMAGESRESPONSE_H

#include "ecrresponse.h"
#include "listimagesrequest.h"

namespace QtAws {
namespace Ecr {

class ListImagesResponsePrivate;

class QTAWSECR_EXPORT ListImagesResponse : public EcrResponse {
    Q_OBJECT

public:
    ListImagesResponse(const ListImagesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListImagesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListImagesResponse)
    Q_DISABLE_COPY(ListImagesResponse)

};

} // namespace Ecr
} // namespace QtAws

#endif
