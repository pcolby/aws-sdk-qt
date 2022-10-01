// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTABLEMETADATARESPONSE_H
#define QTAWS_GETTABLEMETADATARESPONSE_H

#include "athenaresponse.h"
#include "gettablemetadatarequest.h"

namespace QtAws {
namespace Athena {

class GetTableMetadataResponsePrivate;

class QTAWSATHENA_EXPORT GetTableMetadataResponse : public AthenaResponse {
    Q_OBJECT

public:
    GetTableMetadataResponse(const GetTableMetadataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTableMetadataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTableMetadataResponse)
    Q_DISABLE_COPY(GetTableMetadataResponse)

};

} // namespace Athena
} // namespace QtAws

#endif
