// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMETADATARESPONSE_H
#define QTAWS_PUTMETADATARESPONSE_H

#include "ivsresponse.h"
#include "putmetadatarequest.h"

namespace QtAws {
namespace Ivs {

class PutMetadataResponsePrivate;

class QTAWSIVS_EXPORT PutMetadataResponse : public IvsResponse {
    Q_OBJECT

public:
    PutMetadataResponse(const PutMetadataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutMetadataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutMetadataResponse)
    Q_DISABLE_COPY(PutMetadataResponse)

};

} // namespace Ivs
} // namespace QtAws

#endif
