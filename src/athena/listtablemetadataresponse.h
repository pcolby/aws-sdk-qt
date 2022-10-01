// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTABLEMETADATARESPONSE_H
#define QTAWS_LISTTABLEMETADATARESPONSE_H

#include "athenaresponse.h"
#include "listtablemetadatarequest.h"

namespace QtAws {
namespace Athena {

class ListTableMetadataResponsePrivate;

class QTAWSATHENA_EXPORT ListTableMetadataResponse : public AthenaResponse {
    Q_OBJECT

public:
    ListTableMetadataResponse(const ListTableMetadataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTableMetadataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTableMetadataResponse)
    Q_DISABLE_COPY(ListTableMetadataResponse)

};

} // namespace Athena
} // namespace QtAws

#endif
