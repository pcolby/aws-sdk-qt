// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVERCERTIFICATESRESPONSE_H
#define QTAWS_LISTSERVERCERTIFICATESRESPONSE_H

#include "iamresponse.h"
#include "listservercertificatesrequest.h"

namespace QtAws {
namespace Iam {

class ListServerCertificatesResponsePrivate;

class QTAWSIAM_EXPORT ListServerCertificatesResponse : public IamResponse {
    Q_OBJECT

public:
    ListServerCertificatesResponse(const ListServerCertificatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListServerCertificatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListServerCertificatesResponse)
    Q_DISABLE_COPY(ListServerCertificatesResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
