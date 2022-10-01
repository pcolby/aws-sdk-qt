// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCATIONFSXONTAPRESPONSE_H
#define QTAWS_DESCRIBELOCATIONFSXONTAPRESPONSE_H

#include "datasyncresponse.h"
#include "describelocationfsxontaprequest.h"

namespace QtAws {
namespace DataSync {

class DescribeLocationFsxOntapResponsePrivate;

class QTAWSDATASYNC_EXPORT DescribeLocationFsxOntapResponse : public DataSyncResponse {
    Q_OBJECT

public:
    DescribeLocationFsxOntapResponse(const DescribeLocationFsxOntapRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeLocationFsxOntapRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLocationFsxOntapResponse)
    Q_DISABLE_COPY(DescribeLocationFsxOntapResponse)

};

} // namespace DataSync
} // namespace QtAws

#endif
