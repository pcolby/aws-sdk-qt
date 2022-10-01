// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVERCERTIFICATETAGSRESPONSE_H
#define QTAWS_LISTSERVERCERTIFICATETAGSRESPONSE_H

#include "iamresponse.h"
#include "listservercertificatetagsrequest.h"

namespace QtAws {
namespace Iam {

class ListServerCertificateTagsResponsePrivate;

class QTAWSIAM_EXPORT ListServerCertificateTagsResponse : public IamResponse {
    Q_OBJECT

public:
    ListServerCertificateTagsResponse(const ListServerCertificateTagsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListServerCertificateTagsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListServerCertificateTagsResponse)
    Q_DISABLE_COPY(ListServerCertificateTagsResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
