// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONTACTRESPONSE_H
#define QTAWS_DESCRIBECONTACTRESPONSE_H

#include "groundstationresponse.h"
#include "describecontactrequest.h"

namespace QtAws {
namespace GroundStation {

class DescribeContactResponsePrivate;

class QTAWSGROUNDSTATION_EXPORT DescribeContactResponse : public GroundStationResponse {
    Q_OBJECT

public:
    DescribeContactResponse(const DescribeContactRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeContactRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeContactResponse)
    Q_DISABLE_COPY(DescribeContactResponse)

};

} // namespace GroundStation
} // namespace QtAws

#endif
