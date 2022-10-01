// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCETAGSRESPONSE_H
#define QTAWS_LISTRESOURCETAGSRESPONSE_H

#include "kmsresponse.h"
#include "listresourcetagsrequest.h"

namespace QtAws {
namespace Kms {

class ListResourceTagsResponsePrivate;

class QTAWSKMS_EXPORT ListResourceTagsResponse : public KmsResponse {
    Q_OBJECT

public:
    ListResourceTagsResponse(const ListResourceTagsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListResourceTagsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResourceTagsResponse)
    Q_DISABLE_COPY(ListResourceTagsResponse)

};

} // namespace Kms
} // namespace QtAws

#endif
