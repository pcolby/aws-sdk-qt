// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMULTIPARTUPLOADSRESPONSE_H
#define QTAWS_LISTMULTIPARTUPLOADSRESPONSE_H

#include "glacierresponse.h"
#include "listmultipartuploadsrequest.h"

namespace QtAws {
namespace Glacier {

class ListMultipartUploadsResponsePrivate;

class QTAWSGLACIER_EXPORT ListMultipartUploadsResponse : public GlacierResponse {
    Q_OBJECT

public:
    ListMultipartUploadsResponse(const ListMultipartUploadsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListMultipartUploadsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMultipartUploadsResponse)
    Q_DISABLE_COPY(ListMultipartUploadsResponse)

};

} // namespace Glacier
} // namespace QtAws

#endif
