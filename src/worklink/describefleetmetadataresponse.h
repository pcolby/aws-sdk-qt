// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETMETADATARESPONSE_H
#define QTAWS_DESCRIBEFLEETMETADATARESPONSE_H

#include "worklinkresponse.h"
#include "describefleetmetadatarequest.h"

namespace QtAws {
namespace WorkLink {

class DescribeFleetMetadataResponsePrivate;

class QTAWSWORKLINK_EXPORT DescribeFleetMetadataResponse : public WorkLinkResponse {
    Q_OBJECT

public:
    DescribeFleetMetadataResponse(const DescribeFleetMetadataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeFleetMetadataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFleetMetadataResponse)
    Q_DISABLE_COPY(DescribeFleetMetadataResponse)

};

} // namespace WorkLink
} // namespace QtAws

#endif
