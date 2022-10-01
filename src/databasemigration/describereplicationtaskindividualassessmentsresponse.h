// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPLICATIONTASKINDIVIDUALASSESSMENTSRESPONSE_H
#define QTAWS_DESCRIBEREPLICATIONTASKINDIVIDUALASSESSMENTSRESPONSE_H

#include "databasemigrationresponse.h"
#include "describereplicationtaskindividualassessmentsrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeReplicationTaskIndividualAssessmentsResponsePrivate;

class QTAWSDATABASEMIGRATION_EXPORT DescribeReplicationTaskIndividualAssessmentsResponse : public DatabaseMigrationResponse {
    Q_OBJECT

public:
    DescribeReplicationTaskIndividualAssessmentsResponse(const DescribeReplicationTaskIndividualAssessmentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeReplicationTaskIndividualAssessmentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReplicationTaskIndividualAssessmentsResponse)
    Q_DISABLE_COPY(DescribeReplicationTaskIndividualAssessmentsResponse)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
