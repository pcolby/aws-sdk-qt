// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOCUMENTSRESPONSE_H
#define QTAWS_LISTDOCUMENTSRESPONSE_H

#include "ssmresponse.h"
#include "listdocumentsrequest.h"

namespace QtAws {
namespace Ssm {

class ListDocumentsResponsePrivate;

class QTAWSSSM_EXPORT ListDocumentsResponse : public SsmResponse {
    Q_OBJECT

public:
    ListDocumentsResponse(const ListDocumentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDocumentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDocumentsResponse)
    Q_DISABLE_COPY(ListDocumentsResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
